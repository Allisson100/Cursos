# Desenvolvendo NotFound

Vamos desenvolver agora aquela página que vai aparecer caso a rota esteja errada.

Pagina NaoEncontrada:

    import styles from './NaoEncontrada.module.css'
    import erro404 from 'assets/erro_404.png'

    export default function NaoEncontrada () {
        return (
            <>
                <div className={styles.conteudoContainer}>
                    <span className={styles.texto404}>404</span>

                    <h1 className={styles.titulo}>
                        Ops! Página não encontrada.
                    </h1>

                    <p className={styles.paragrafo}>
                        Lorem ipsum dolor sit, amet consectetur adipisicing elit. Blanditiis, beatae nam dolor porro iusto accusamus autem at itaque temporibus rerum facere fugiat nobis doloribus odio, expedita vel. Repudiandae, quo illum.
                    </p>

                    <div className={styles.botaoContainer}>
                        <button>Voltar</button>
                    </div>

                    <img
                        className={styles.imagemCachorro}
                        src={erro404}
                        alt="Cachorro de óculos e vestido como humanos"
                    />
                </div>
                <div className={styles.espacoEmBranco}></div>
            </>
        )
    }
